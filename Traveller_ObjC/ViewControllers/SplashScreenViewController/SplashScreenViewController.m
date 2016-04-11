//
//  SplashScreenViewController.m
//  Traveller_ObjC
//
//  Created by Sandip Jadhav on 08/04/16.
//  Copyright © 2016 Sagar Shirbhate. All rights reserved.
//

#import "SplashScreenViewController.h"
#import "LoginViewController.h"
@interface SplashScreenViewController ()
{
    NSTimer * timer;
    float progress;
    IBOutlet UIProgressView *progressBar;
    IBOutlet UIImageView *image;
}
@end

@implementation SplashScreenViewController

-(void)viewWillAppear:(BOOL)animated{
    self.navigationController.navigationBarHidden=YES;
    progress = 0 ;
    timer = [NSTimer scheduledTimerWithTimeInterval: 0.2
                                             target:self
                                           selector:@selector(targetMethod)
                                           userInfo:nil
                                            repeats:YES];
    image.layer.shadowOffset = CGSizeMake(1, 1);
    image.layer.shadowColor = [[UIColor blackColor] CGColor];
    image.layer.shadowRadius = 4.0f;
    image.layer.shadowOpacity = 0.80f;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

-(void)targetMethod{
    progress =progress + 0.1;
    if (progress>=1.0) {
        [timer invalidate];
        [self pushLoginView];
    }else{
        progressBar.progress = progress;
    }
    
}


-(void)pushLoginView{
    LoginViewController * loginVC =[self.storyboard instantiateViewControllerWithIdentifier:@"LoginViewController"];
    [self.navigationController pushViewController:loginVC animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
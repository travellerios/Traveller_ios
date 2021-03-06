//
//  ViewProfileController.h
//  Traveller_ObjC
//
//  Created by Sandip Jadhav on 08/04/16.
//  Copyright © 2016 Sagar Shirbhate. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JASidePanelController.h"
#import "GIBadgeView.h"
#import "NotificationsViewController.h"
#import "FeedsTableViewCell.h"
#import "WishedToTableViewCell.h"
#import "FollowingTableViewCell.h"
#import "FRHyperLabel.h"
#import "AddPostViewController.h"
@interface ViewProfileController : UIViewController
{
    UIScrollView * myScrollView;
    GIBadgeView * badgeView;
    
    NSMutableArray * buttonArray;
    NSMutableArray * homeFeedData;
    NSMutableArray * followerData;
    NSMutableArray * followingData;
    NSMutableArray * wishToData;
    NSMutableArray * visitedCitiesData;
    
    CGFloat _headerHeight;
    CGFloat _subHeaderHeight;
    CGFloat _headerSwitchOffset;
    CGFloat _avatarImageSize;
    CGFloat _avatarImageCompressedSize;
    
    BOOL _barIsCollapsed;
    BOOL _barAnimationComplete;
    BOOL firstTimePageOpen;
    BOOL homeFeedPageShouldDoPaging;
    BOOL visitedCitiesPageShouldDoPaging;
    BOOL wishToPageShouldDoPaging;
    BOOL followerPageShouldDoPaging;
    BOOL followingPageShouldDoPaging;
    BOOL isFollow;
    
    int homeFeedPage;
    int followerPage;
    int followingPage;
    int wishToPage;
    int visitedCitiesPage;
    int selectedIndex;
    int selectedUserIdex;
    int indexForLikeNotification;
    int indexForCommentNotification;
    NSDictionary * dictforFollowFollowng;
    NSDictionary * forLike;
    NSDictionary * selectedDictForDelete;
    NSIndexPath * ipForFollow;
}

@property (weak) UITableView *tableView;
@property (weak) UIImageView *imageHeaderView;
@property (weak) UIVisualEffectView *visualEffectView;
@property (strong,nonatomic) UIView *customTitleView;
@property (strong) UIImage *originalBackgroundImage;
@property (strong) NSMutableDictionary* blurredImageCache;
@property(strong,nonatomic)NSString * userId;
@property(strong,nonatomic)NSString * name;
@property(strong,nonatomic)NSString * imageUrl;

@end

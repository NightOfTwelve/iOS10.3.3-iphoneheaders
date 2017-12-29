/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FMFFriend, FMMapView, NSArray, UIView, UINavigationBar, TopBarTitleView, UILabel, UIButton, NoLocationViewController;

@interface LocationPreviewViewController : UIViewController {

	FMFFriend* _friend;
	FMMapView* _mapView;
	NSArray* _previewItems;
	UIView* _bottomView;
	UINavigationBar* _navigationBar;
	TopBarTitleView* _topBarTitleView;
	UILabel* _distanceLabel;
	UILabel* _addressLabel;
	UIButton* _currentLocationButton;
	UIView* _lineView;
	NoLocationViewController* _noLocationChildViewController;

}

@property (nonatomic,retain) NSArray * previewItems;                                                //@synthesize previewItems=_previewItems - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomView;                                            //@synthesize bottomView=_bottomView - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * navigationBar;                                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) TopBarTitleView * topBarTitleView;                                     //@synthesize topBarTitleView=_topBarTitleView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * distanceLabel;                                        //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * addressLabel;                                         //@synthesize addressLabel=_addressLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * currentLocationButton;                               //@synthesize currentLocationButton=_currentLocationButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * lineView;                                              //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) NoLocationViewController * noLocationChildViewController;              //@synthesize noLocationChildViewController=_noLocationChildViewController - In the implementation block
@property (nonatomic,retain) FMFFriend * friend;                                                    //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) FMMapView * mapView;                                                   //@synthesize mapView=_mapView - In the implementation block
-(UIButton *)currentLocationButton;
-(void)setCurrentLocationButton:(UIButton *)arg1 ;
-(void)updateUserLocationViewColor;
-(void)setNoLocationChildViewController:(NoLocationViewController *)arg1 ;
-(void)someLocationChanged;
-(NoLocationViewController *)noLocationChildViewController;
-(id)notifyOthersButtonText;
-(void)setupTitleView;
-(void)setupMapPreview;
-(void)updateFriendData;
-(void)setTopBarTitleView:(TopBarTitleView *)arg1 ;
-(TopBarTitleView *)topBarTitleView;
-(void)getDirectionsAction;
-(void)notifyMeAction;
-(void)notifyFriendAction;
-(void)dealloc;
-(UINavigationBar *)navigationBar;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(void)viewDidLoad;
-(id)previewActionItems;
-(UIView *)bottomView;
-(void)setDistanceLabel:(UILabel *)arg1 ;
-(UILabel *)distanceLabel;
-(UIView *)lineView;
-(void)setLineView:(UIView *)arg1 ;
-(UILabel *)addressLabel;
-(void)setAddressLabel:(UILabel *)arg1 ;
-(FMFFriend *)friend;
-(void)setFriend:(FMFFriend *)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setMapView:(FMMapView *)arg1 ;
-(FMMapView *)mapView;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
@end

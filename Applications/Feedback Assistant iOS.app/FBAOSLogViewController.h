/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSURL, FBAOSLogViewerDataSource, UIActivityIndicatorView, NSString;

@interface FBAOSLogViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource> {

	char _previousToolbarHidden;
	char _loading;
	NSURL* _logURL;
	FBAOSLogViewerDataSource* _logSource;
	UIActivityIndicatorView* _spinner;

}

@property (retain) NSURL * logURL;                                    //@synthesize logURL=_logURL - In the implementation block
@property (retain) FBAOSLogViewerDataSource * logSource;              //@synthesize logSource=_logSource - In the implementation block
@property (assign) char previousToolbarHidden;                        //@synthesize previousToolbarHidden=_previousToolbarHidden - In the implementation block
@property (getter=isLoading,readonly) char loading;                   //@synthesize loading=_loading - In the implementation block
@property (__weak) UIActivityIndicatorView * spinner;                 //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canDisplayURL:(id)arg1 ;
-(void)setOSLogURL:(id)arg1 ;
-(void)setLogURL:(NSURL *)arg1 ;
-(NSURL *)logURL;
-(void)setLogSource:(FBAOSLogViewerDataSource *)arg1 ;
-(void)shareArchive:(id)arg1 ;
-(char)previousToolbarHidden;
-(void)setPreviousToolbarHidden:(char)arg1 ;
-(FBAOSLogViewerDataSource *)logSource;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(char)isLoading;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLoading:(char)arg1 ;
-(void)nextPage;
@end

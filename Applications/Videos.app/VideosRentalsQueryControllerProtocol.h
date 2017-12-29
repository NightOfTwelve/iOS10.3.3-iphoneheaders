/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VideosQueryDataSource;


@protocol VideosRentalsQueryControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<VideosRentalsQueryControllerDelegate> delegate; 
@property (nonatomic,readonly) VideosQueryDataSource * currentDataSource; 
@required
+(id)rentalQueryForCurrentAccountStatus;
-(VideosQueryDataSource *)currentDataSource;
-(void)setDelegate:(id)arg1;
-(id<VideosRentalsQueryControllerDelegate>)delegate;

@end

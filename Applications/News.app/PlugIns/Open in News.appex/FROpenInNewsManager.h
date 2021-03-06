/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/Open in News.appex/Open in News
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCContentContext;
@interface FROpenInNewsManager : NSObject {

	id<FCContentContext> _contentContext;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;              //@synthesize contentContext=_contentContext - In the implementation block
-(id)initWithContentContext:(id)arg1 ;
-(void)openArticleWithURL:(id)arg1 orChannelWithFeedURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)handleFeedURL:(id)arg1 ;
-(id)init;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
@end


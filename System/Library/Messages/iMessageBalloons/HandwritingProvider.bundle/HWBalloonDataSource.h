/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <IMCore/IMBalloonPluginDataSource.h>

@class HWHandwritingItem, HWAbstractBalloonController;

@interface HWBalloonDataSource : IMBalloonPluginDataSource {

	HWHandwritingItem* _cachedHandwritingItem;
	HWAbstractBalloonController* _balloonController;

}

@property (nonatomic,readonly) HWHandwritingItem * handwritingFromPayload; 
@property (assign,nonatomic,__weak) HWAbstractBalloonController * balloonController;              //@synthesize balloonController=_balloonController - In the implementation block
@property (nonatomic,readonly) char shouldAnimate; 
-(char)canProvideSize;
-(HWHandwritingItem *)handwritingFromPayload;
-(void)initialMessageInfoDidChange;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)shouldAnimate;
-(unsigned)playbackType;
-(id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4 ;
-(void)payloadDidChange;
-(void)stopPlayback;
-(void)playbackWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)thumbnailURLWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(HWAbstractBalloonController *)balloonController;
-(void)setBalloonController:(HWAbstractBalloonController *)arg1 ;
@end


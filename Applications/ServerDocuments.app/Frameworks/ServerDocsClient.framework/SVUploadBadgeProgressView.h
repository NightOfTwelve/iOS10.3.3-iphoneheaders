/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/SVProgressView.h>

@class CAShapeLayer;

@interface SVUploadBadgeProgressView : SVProgressView {

	CAShapeLayer* _backgroundRingLayer;
	CAShapeLayer* _progressLayer;
	CAShapeLayer* _shadowLayer;
	CAShapeLayer* _arrowLayer;

}

@property (nonatomic,retain) CAShapeLayer * backgroundRingLayer;              //@synthesize backgroundRingLayer=_backgroundRingLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                    //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shadowLayer;                      //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * arrowLayer;                       //@synthesize arrowLayer=_arrowLayer - In the implementation block
-(void)updateLayerPropertiesAnimated:(char)arg1 ;
-(CAShapeLayer *)backgroundRingLayer;
-(void)setBackgroundRingLayer:(CAShapeLayer *)arg1 ;
-(float)_arrowHeight;
-(id)_arrowPath;
-(CAShapeLayer *)arrowLayer;
-(char)hasIntermediateState;
-(void)setArrowLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(void)setShadowLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)shadowLayer;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
@end


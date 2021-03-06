/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	char _includePrivateEvents;
	NSDictionary* _feedbacks;

}

@property (assign,nonatomic) char includePrivateEvents;              //@synthesize includePrivateEvents=_includePrivateEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * feedbacks;               //@synthesize feedbacks=_feedbacks - In the implementation block
+(id)privateConfiguration;
+(id)defaultConfiguration;
-(NSDictionary *)feedbacks;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(id)feedbackKeyPaths;
-(int)requiredSupportLevel;
-(char)defaultEnabled;
-(char)includePrivateEvents;
-(void)setIncludePrivateEvents:(char)arg1 ;
@end


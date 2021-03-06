/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>
#import <Feedback Assistant iOS/FBAFilerForm.h>

@class NSNumber, NSOrderedSet, NSString, NSArray, NSSet, NSDate, FBAFeedback, FBAUploadTask, FBAUploadStory;

@interface FBAFeedbackFollowup : FBAManagedFeedbackObject <FBAFilerForm>

@property (retain) NSNumber * primitiveType; 
@property (retain) NSNumber * primitiveComplete; 
@property (retain) NSOrderedSet * primitiveFeedbackFollowupResponses; 
@property (assign) unsigned type; 
@property (getter=isComplete) char complete; 
@property (retain) NSString * displayText; 
@property (retain) NSArray * feedbackFollowupResponses; 
@property (retain) NSSet * fileMatchers; 
@property (retain) NSDate * createdAt; 
@property (retain) FBAFeedback * feedback; 
@property (retain) FBAUploadTask * uploadTask; 
@property (nonatomic,retain) FBAUploadStory * uploadStory; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)followupTypeFromString:(id)arg1 ;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(id)filerFormID;
-(void)setFeedbackFollowupResponses:(NSArray *)arg1 ;
-(NSArray *)feedbackFollowupResponses;
-(id)respondedToAt;
-(NSString *)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setComplete:(char)arg1 ;
-(char)isComplete;
@end


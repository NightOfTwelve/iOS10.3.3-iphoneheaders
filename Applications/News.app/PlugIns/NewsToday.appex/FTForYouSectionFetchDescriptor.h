/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <NewsToday/FTSectionFetchDescriptor.h>

@class FTCatchUpOperationForYouRequest, NSString;

@interface FTForYouSectionFetchDescriptor : NSObject <FTSectionFetchDescriptor> {

	FTCatchUpOperationForYouRequest* _forYouRequest;

}

@property (nonatomic,copy) FTCatchUpOperationForYouRequest * forYouRequest;              //@synthesize forYouRequest=_forYouRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FTCatchUpOperationForYouRequest *)forYouRequest;
-(void)setForYouRequest:(FTCatchUpOperationForYouRequest *)arg1 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)extractResultsFromCatchUpOperation:(id)arg1 ;
-(id)sortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)limitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned)arg2 ;
-(id)initWithForYouConfiguration:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 mutedTagIDs:(id)arg4 purchasedTagIDs:(id)arg5 subscribedTagIDs:(id)arg6 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


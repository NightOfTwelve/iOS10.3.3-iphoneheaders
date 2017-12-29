/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/SourceSearchContext.h>

@class NSString, NSArray, MFMessageCriterion;

@interface MutableSourceSearchContext : SourceSearchContext

@property (nonatomic,copy) NSString * searchText; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (nonatomic,retain) MFMessageCriterion * criterion; 
@property (nonatomic,copy) id shouldStopSearching; 
@property (assign,nonatomic) char shouldSearchAllMail; 
@property (assign,nonatomic) char shouldSkipLocalSearch; 
@property (assign,nonatomic) char shouldSuppressErrors; 
@property (assign,nonatomic) double timeoutDelay; 
@end

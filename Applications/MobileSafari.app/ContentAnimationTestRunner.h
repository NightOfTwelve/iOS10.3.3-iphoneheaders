/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/PurplePageLoadTestRunner.h>

@class NSMutableDictionary;

@interface ContentAnimationTestRunner : PurplePageLoadTestRunner {

	NSMutableDictionary* _outputData;
	double _testDuration;

}
-(id)initWithTestName:(id)arg1 browserController:(id)arg2 ;
-(char)startPageAction:(id)arg1 ;
-(id)outputDataForPage:(id)arg1 ;
-(void)finishedTestPage:(id)arg1 ;
-(void)writeOutputData;
-(void)finishedTestRunner;
-(char)performActionForPage:(id)arg1 ;
-(id)finalStatusForPage:(id)arg1 ;
@end

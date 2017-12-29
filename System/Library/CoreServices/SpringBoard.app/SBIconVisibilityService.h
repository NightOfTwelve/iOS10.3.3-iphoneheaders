/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {

	SBIconModel* _iconModel;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;

}
-(id)iconStateDisplayIdentifiers;
-(id)initWithIconModel:(id)arg1 ;
-(void)_visibleIdentifiersChanged:(id)arg1 ;
-(void)dealloc;
@end

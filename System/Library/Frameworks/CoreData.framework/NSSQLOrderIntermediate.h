/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {

	NSArray* _sortDescriptors;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2 ;
-(id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end

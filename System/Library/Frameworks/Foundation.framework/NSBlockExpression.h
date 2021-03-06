/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSArray;

@interface NSBlockExpression : NSExpression {

	/*^block*/id _block;
	NSArray* _arguments;

}
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 block:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(/*^block*/id)expressionBlock;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)arguments;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
@end


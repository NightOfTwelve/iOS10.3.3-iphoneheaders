/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGenerationToken : NSObject <NSSecureCoding> {

	long long _origin;
	long long _generation;
	NSString* _storeIdentifier;

}
+(char)supportsSecureCoding;
-(char)isReferencingStore:(id)arg1 ;
-(id)initForStore:(id)arg1 origin:(long long)arg2 generation:(long long)arg3 ;
-(id)initWithStoreIdentifier:(id)arg1 origin:(long long)arg2 generation:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)origin;
-(id)storeIdentifier;
-(long long)generation;
@end

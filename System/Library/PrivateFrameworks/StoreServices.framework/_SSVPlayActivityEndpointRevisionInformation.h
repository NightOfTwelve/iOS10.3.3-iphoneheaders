/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet, NSString;

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _additionalPendingRevisionsIndexSet;
	NSString* _revisionVersionToken;
	unsigned long long _currentRevision;

}

@property (nonatomic,copy) NSIndexSet * additionalPendingRevisionsIndexSet;              //@synthesize additionalPendingRevisionsIndexSet=_additionalPendingRevisionsIndexSet - In the implementation block
@property (assign,nonatomic) unsigned long long currentRevision;                         //@synthesize currentRevision=_currentRevision - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                              //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
+(char)supportsSecureCoding;
-(NSIndexSet *)additionalPendingRevisionsIndexSet;
-(void)setCurrentRevision:(unsigned long long)arg1 ;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(NSString *)revisionVersionToken;
-(void)setAdditionalPendingRevisionsIndexSet:(NSIndexSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)currentRevision;
@end


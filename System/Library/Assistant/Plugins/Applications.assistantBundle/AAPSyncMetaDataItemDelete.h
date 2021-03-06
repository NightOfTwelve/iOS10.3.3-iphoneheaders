/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Applications/Applications-Structs.h>
#import <Applications/AAPSyncMetaDataItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, AAPSyncAnchor;

@interface AAPSyncMetaDataItemDelete : NSObject <AAPSyncMetaDataItem, NSCoding> {

	NSString* _appId;
	AAPSyncAnchor* _anchor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appId;                    //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncAnchor * anchor;              //@synthesize anchor=_anchor - In the implementation block
-(id)scrapeAppInfo;
-(id)initWithAppId:(id)arg1 anchor:(id)arg2 ;
-(char)isMetaDataItemDelete;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AAPSyncAnchor *)anchor;
-(void)_validate;
-(NSString *)appId;
@end


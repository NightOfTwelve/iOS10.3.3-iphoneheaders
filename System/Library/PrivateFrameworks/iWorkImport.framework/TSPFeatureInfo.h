/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSPFeatureInfo : NSObject {

	NSString* _identifier;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long readVersion;               //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long writeVersion;              //@synthesize writeVersion=_writeVersion - In the implementation block
-(id)initWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 fromArchiver:(char)arg4 ;
-(unsigned long long)readVersion;
-(unsigned long long)writeVersion;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)identifier;
@end

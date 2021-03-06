/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface UpdateMigratorConfiguration : NSObject {

	NSString* _migratorType;
	NSMutableDictionary* _migratorValues;
	unsigned _attempts;

}

@property (nonatomic,readonly) unsigned attempts;                    //@synthesize attempts=_attempts - In the implementation block
@property (nonatomic,readonly) NSString * migratorType;              //@synthesize migratorType=_migratorType - In the implementation block
-(unsigned)attempts;
-(void)incrementAttempts;
-(id)initWithMigratorType:(id)arg1 ;
-(NSString *)migratorType;
-(id)copyMigratorValueForConfigurationKey:(id)arg1 ;
-(void)setMigratorValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(id)initWithUserDefaultsRepresentation:(id)arg1 ;
-(id)copyUserDefaultsRepresentation;
-(id)init;
@end


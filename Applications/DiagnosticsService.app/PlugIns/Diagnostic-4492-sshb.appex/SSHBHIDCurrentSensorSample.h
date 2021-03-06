/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4492-sshb.appex/Diagnostic-4492-sshb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-4492-sshb/SSHBHIDSamplePrintable.h>
#import <Diagnostic-4492-sshb/SSHBHIDCurrentSensorSample.h>
@class NSString;


@protocol SSHBHIDCurrentSensorSample <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) float current; 
@required
-(NSString *)name;
-(NSString *)identifier;
-(float)current;

@end


@class NSString;

@interface SSHBHIDCurrentSensorSample : NSObject <SSHBHIDSamplePrintable, SSHBHIDCurrentSensorSample> {

	NSString* _identifier;
	NSString* _name;
	float _current;

}

@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float current;                         //@synthesize current=_current - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)csv;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(float)current;
-(void)setCurrent:(float)arg1 ;
@end


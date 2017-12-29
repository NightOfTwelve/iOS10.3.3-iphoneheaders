/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4276.appex/Diagnostic-4276
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-2386/DKDiagnosticInputs.h>

@class NSNumber, NSString;

@interface ProximitySensorInputs : NSObject <DKDiagnosticInputs> {

	NSNumber* _noInputTimeout;
	NSNumber* _holdTime;

}

@property (nonatomic,retain) NSNumber * noInputTimeout;              //@synthesize noInputTimeout=_noInputTimeout - In the implementation block
@property (nonatomic,retain) NSNumber * holdTime;                    //@synthesize holdTime=_holdTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)noInputTimeout;
-(void)setNoInputTimeout:(NSNumber *)arg1 ;
-(void)setHoldTime:(NSNumber *)arg1 ;
-(NSNumber *)holdTime;
-(char)validateAndInitializeParameters:(id)arg1 ;
@end

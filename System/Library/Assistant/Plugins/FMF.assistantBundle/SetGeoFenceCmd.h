/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class NSString, SALocation, SAPerson;

@interface SetGeoFenceCmd : FMFBaseCmd {

	char enable;
	char onetimeonly;
	NSString* trigger;
	SALocation* location;
	SAPerson* saPerson;
	NSString* fenceType;

}

@property (assign,nonatomic) char enable; 
@property (assign,nonatomic) char onetimeonly; 
@property (nonatomic,copy) NSString * trigger; 
@property (nonatomic,copy) SALocation * location; 
@property (nonatomic,retain) SAPerson * saPerson; 
@property (nonatomic,copy) NSString * fenceType; 
+(id)bundle;
-(void)setOnetimeonly:(char)arg1 ;
-(SAPerson *)saPerson;
-(char)onetimeonly;
-(id)requestedLocationDictionary;
-(id)fullAddressDictionaryForSALocation:(id)arg1 ;
-(id)postalAddressWithSALocation:(id)arg1 ;
-(void)setSaPerson:(SAPerson *)arg1 ;
-(id)path;
-(char)enable;
-(SALocation *)location;
-(NSString *)trigger;
-(void)setLocation:(SALocation *)arg1 ;
-(id)result;
-(void)setTrigger:(NSString *)arg1 ;
-(id)addressString;
-(void)setEnable:(char)arg1 ;
-(NSString *)fenceType;
-(void)setFenceType:(NSString *)arg1 ;
-(id)allHandles;
-(id)jsonBodyDictionary;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ContactRequirements : NSObject {

	char _nameRequired;
	char _phoneNumberRequired;
	char _emailAddressRequired;

}

@property (nonatomic,readonly) char nameRequired;                      //@synthesize nameRequired=_nameRequired - In the implementation block
@property (nonatomic,readonly) char phoneNumberRequired;               //@synthesize phoneNumberRequired=_phoneNumberRequired - In the implementation block
@property (nonatomic,readonly) char emailAddressRequired;              //@synthesize emailAddressRequired=_emailAddressRequired - In the implementation block
-(id)initWithNameRequired:(char)arg1 phoneNumberRequired:(char)arg2 emailAddressRequired:(char)arg3 ;
-(char)nameRequired;
-(char)phoneNumberRequired;
-(char)emailAddressRequired;
@end

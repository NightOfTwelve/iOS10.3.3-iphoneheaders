/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFSearchSuggester.h>

@class NSArray, NSPredicate;

@interface MFSpotlightSuggester : MFSearchSuggester {

	char _disableCoreRecents;
	NSArray* _attributeNames;
	NSPredicate* _basePredicate;

}

@property (nonatomic,readonly) id<MFUserProfileProvider> userProfileProvider; 
@property (nonatomic,copy) NSArray * attributeNames;                                       //@synthesize attributeNames=_attributeNames - In the implementation block
@property (nonatomic,copy) NSPredicate * basePredicate;                                    //@synthesize basePredicate=_basePredicate - In the implementation block
@property (assign,nonatomic) char disableCoreRecents;                                      //@synthesize disableCoreRecents=_disableCoreRecents - In the implementation block
+(id)defaultAttributeNames;
-(id)generateSuggestionsUsingPhraseManager:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDisableCoreRecents:(char)arg1 ;
-(void)setBasePredicate:(NSPredicate *)arg1 ;
-(char)disableCoreRecents;
-(id)accountEmailAddressesByReplacingName:(id)arg1 ;
-(id)_doGenerateSuggestionsUsingPhraseManager:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_queryStringUsingPhraseManager:(id)arg1 attributes:(id)arg2 baseQuery:(id)arg3 ;
-(id)_matchedFieldsQueryStringsForPhrase:(id)arg1 attributes:(id)arg2 ;
-(id)_queryRecentsUsingPhraseManager:(id)arg1 ;
-(id)myAddressesForPhrase:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)categories;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MFUserProfileProvider>)userProfileProvider;
-(NSPredicate *)basePredicate;
-(NSArray *)attributeNames;
-(void)setAttributeNames:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFDomainObjectClearing.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString;

@interface ABAssistantCommandClear : NSObject <AFDomainObjectClearing, ABAssistantCommand> {

	void* _addressBook;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(void)clearAceDomainObjects;
-(void)dealloc;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
@end


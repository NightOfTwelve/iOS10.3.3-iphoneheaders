/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData, NSString;

@interface _PFExternalReferenceData : NSData {

	NSData* _originalData;
	void* _bytesPtrForStore;
	unsigned _bytesLengthForStore;
	void* _bytesPtrForExternalReference;
	unsigned _bytesLengthForExternalReference;
	NSString* _externalReferenceLocation;
	NSString* _safeguardLocation;
	id _ubiquitousLocation;
	struct {
		unsigned _isStoredExternally : 1;
		unsigned _hasMappedData : 1;
		unsigned _cleanupOnDealloc : 1;
		unsigned _dataProtectionLevel : 3;
		unsigned _isStoredUbiquitously : 1;
		unsigned _createdByUbiquityImport : 1;
		unsigned _reserved : 24;
	}  _externalDataFlags;

}
+(char)_updateFileDescriptorsInUseReserveNew:(char)arg1 ;
+(char)_releaseReservedMapFileDescriptor;
+(char)_reserveMapFileDescriptor;
-(Class)classForArchiver;
-(char)hasExternalReferenceContent;
-(const char*)_externalReferenceLocation;
-(id)_originalData;
-(const char*)_safeguardLocation;
-(int)preferredProtectionLevel;
-(unsigned)_bytesLengthForExternalReference;
-(void)doCleanupOnDealloc;
-(id)_safeguardLocationString;
-(id)externalReferenceLocationString;
-(id)databaseValue;
-(const void*)_bytesPtrForStore;
-(unsigned)_bytesLengthForStore;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6 ;
-(id)constructSafeguardStringFromString:(id)arg1 ;
-(void)_doCleanup;
-(const void*)_bytesPtrForExternalReference;
-(char)_attemptToMapData:(id*)arg1 ;
-(id)_exceptionForReadError:(id)arg1 ;
-(const void*)_retrieveExternalData;
-(char)_isEqualHelper:(id)arg1 ;
-(id)initForUbiquityDictionary:(id)arg1 store:(id)arg2 ;
-(id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4 ;
-(void)_setBytesForExternalReference:(const void*)arg1 ;
-(void)_writeExternalReferenceToInterimLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(id)_externalReferenceLocationString;
-(char)_createdByUbiquityImport;
-(id)copy;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)length;
-(id)mutableCopy;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(Class)classForCoder;
-(id)UUID;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(char)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)filename;
-(void)finalize;
@end


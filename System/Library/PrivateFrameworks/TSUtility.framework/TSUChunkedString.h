/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:48 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <Foundation/NSMutableString.h>

@interface TSUChunkedString : NSMutableString {

	unsigned _length;
	vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >* _chunks;
	unsigned _chunkLength;

}
-(id)init;
-(void)dealloc;
-(unsigned)length;
-(void)appendString:(id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)compact;
-(void)insertString:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)initWithChunkLength:(unsigned)arg1 ;
-(void)p_appendRange:(NSRange)arg1 fromString:(id)arg2 ;
-(void)p_insertCharactersInRange:(NSRange)arg1 fromString:(id)arg2 atIndex:(unsigned)arg3 chunkIndex:(unsigned)arg4 ;
-(void)p_deleteCharactersInRange:(NSRange)arg1 chunkIndex:(unsigned)arg2 ;
-(void)p_compactChunksInRange:(NSRange)arg1 ;
@end

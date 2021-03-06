/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileNotes/MobileNotes-Structs.h>
@interface ICDrawingContour : NSObject {

	int _drawFromIndex;
	int _contourLength;
	int _immutableIndex;
	Contour* _currentPath;
	char _recordRawData;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _verticies;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _raw;

}

@property (nonatomic,readonly) vector<ICDrawingOutputPoint* verticies;              //@synthesize verticies=_verticies - In the implementation block
@property (nonatomic,readonly) vector<ICDrawingOutputPoint* raw;                    //@synthesize raw=_raw - In the implementation block
@property (assign,nonatomic) char recordRawData;                                    //@synthesize recordRawData=_recordRawData - In the implementation block
@property (nonatomic,readonly) Contour* currentPath; 
-(void)clearCurrentPath;
-(void)calcSplinePathInRange:(NSRange)arg1 into:(Contour*)arg2 ;
-(Contour*)segmentWithDelta:(int)arg1 ;
-(void)setRecordRawData:(char)arg1 ;
-(void)calcRawPath:(NSRange)arg1 into:(Contour*)arg2 ;
-(void)addVerticies:(const vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)arg1 fromIndex:(unsigned)arg2 ;
-(void)segmentIfNeededWithBlock:(/*^block*/id)arg1 ;
-(vector<ICDrawingOutputPoint*)verticies;
-(vector<ICDrawingOutputPoint*)raw;
-(char)recordRawData;
-(id)init;
-(unsigned)size;
-(CGRect)bounds;
-(void)dealloc;
-(void)clear;
-(Contour*)currentPath;
-(Contour*)segment;
@end


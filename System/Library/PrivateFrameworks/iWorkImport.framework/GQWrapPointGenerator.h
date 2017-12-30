/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQWrapPointGenerator <NSObject>
@required
-(const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)wrapPoints;
-(void)addWrapPoint:(id)arg1;
-(vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
-(void)clearWrapPoints;

@end

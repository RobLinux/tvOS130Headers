/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PXMagazineRectArray, NSArray, NSMutableArray;

@interface PXMagazineLayoutCoordinator : NSObject {

	PXMagazineRectArray* _fallbackLayout;
	double _currentBestScore;
	BOOL _stopIfAnyGoodLayout;
	BOOL _stop;
	NSArray* _paddingInputs;
	double _tileAspectRatio;
	NSMutableArray* _qualifiedLayouts;
	PXMagazineRectArray* _currentLayout;
	unsigned long long _currentIndex;

}

@property (nonatomic,readonly) NSArray * paddingInputs;                        //@synthesize paddingInputs=_paddingInputs - In the implementation block
@property (nonatomic,readonly) double tileAspectRatio;                         //@synthesize tileAspectRatio=_tileAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL stopIfAnyGoodLayout;                       //@synthesize stopIfAnyGoodLayout=_stopIfAnyGoodLayout - In the implementation block
@property (nonatomic,retain) NSMutableArray * qualifiedLayouts;                //@synthesize qualifiedLayouts=_qualifiedLayouts - In the implementation block
@property (nonatomic,retain) PXMagazineRectArray * currentLayout;              //@synthesize currentLayout=_currentLayout - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                  //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) BOOL stop;                                        //@synthesize stop=_stop - In the implementation block
-(BOOL)stop;
-(PXMagazineRectArray *)currentLayout;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentIndex;
-(BOOL)validateCurrentLayout;
-(void)validateCurrentLayoutAsFallback;
-(double)scoreOfLayout:(id)arg1 ;
-(unsigned long long)currentLayoutsCount;
-(id)currentBestLayout;
-(NSArray *)paddingInputs;
-(double)tileAspectRatio;
-(BOOL)stopIfAnyGoodLayout;
-(NSMutableArray *)qualifiedLayouts;
-(void)setQualifiedLayouts:(NSMutableArray *)arg1 ;
-(void)setCurrentLayout:(PXMagazineRectArray *)arg1 ;
-(void)setStop:(BOOL)arg1 ;
-(id)initWithPaddingInputs:(id)arg1 tileAspectRatio:(double)arg2 stopIfAnyGoodLayout:(BOOL)arg3 ;
@end


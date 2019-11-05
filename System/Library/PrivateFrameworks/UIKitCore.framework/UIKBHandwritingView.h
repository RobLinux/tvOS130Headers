/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableArray, UIBezierPath, UIKBHandwritingStrokePointFIFO, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingBezierPathPointFIFO, UIKBHandwritingStrokeView, UIImageView, NSMutableSet, UIDelayedAction, UIKBHandwritingInputSpeedModel, NSString;

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate> {

	BOOL _initialPointPosted;
	double _inkWidth;
	CGColorRef _inkColor;
	CGImageRef _inkMask;
	NSMutableArray* _interpolatedPoints;
	UIBezierPath* _currentPath;
	NSMutableArray* _currentPoints;
	UIKBHandwritingStrokePointFIFO* _strokeFIFO;
	UIKBHandwritingBoxcarFilterPointFIFO* _smoothingFIFO;
	UIKBHandwritingQuadCurvePointFIFO* _interpolatingFIFO;
	UIKBHandwritingBezierPathPointFIFO* _bezierPathFIFO;
	UIKBHandwritingStrokeView* _strokeView;
	UIImageView* _snapshotView;
	NSMutableSet* _activeTouches;
	double _pageOffset;
	UIDelayedAction* _nextPageTimer;
	UIKBHandwritingInputSpeedModel* _inputSpeedModel;
	SCD_Struct_UI81 _previousPoint;

}

@property (nonatomic,retain) UIKBHandwritingStrokeView * strokeView;                             //@synthesize strokeView=_strokeView - In the implementation block
@property (nonatomic,retain) UIImageView * snapshotView;                                         //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTouches;                                       //@synthesize activeTouches=_activeTouches - In the implementation block
@property (assign,nonatomic) BOOL initialPointPosted;                                            //@synthesize initialPointPosted=_initialPointPosted - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI80 previousPoint;                                      //@synthesize previousPoint=_previousPoint - In the implementation block
@property (assign,nonatomic) double pageOffset;                                                  //@synthesize pageOffset=_pageOffset - In the implementation block
@property (nonatomic,retain) UIDelayedAction * nextPageTimer;                                    //@synthesize nextPageTimer=_nextPageTimer - In the implementation block
@property (nonatomic,retain) UIKBHandwritingInputSpeedModel * inputSpeedModel;                   //@synthesize inputSpeedModel=_inputSpeedModel - In the implementation block
@property (assign,nonatomic) double inkWidth;                                                    //@synthesize inkWidth=_inkWidth - In the implementation block
@property (assign,nonatomic) CGColorRef inkColor;                                                //@synthesize inkColor=_inkColor - In the implementation block
@property (assign,nonatomic) CGImageRef inkMask;                                                 //@synthesize inkMask=_inkMask - In the implementation block
@property (nonatomic,retain) NSMutableArray * interpolatedPoints;                                //@synthesize interpolatedPoints=_interpolatedPoints - In the implementation block
@property (nonatomic,retain) UIBezierPath * currentPath;                                         //@synthesize currentPath=_currentPath - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentPoints;                                     //@synthesize currentPoints=_currentPoints - In the implementation block
@property (nonatomic,retain) UIKBHandwritingStrokePointFIFO * strokeFIFO;                        //@synthesize strokeFIFO=_strokeFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingBoxcarFilterPointFIFO * smoothingFIFO;               //@synthesize smoothingFIFO=_smoothingFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingQuadCurvePointFIFO * interpolatingFIFO;              //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingBezierPathPointFIFO * bezierPathFIFO;                //@synthesize bezierPathFIFO=_bezierPathFIFO - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)send;
-(void)log;
-(void)displayLayer:(id)arg1 ;
-(BOOL)shouldCache;
-(unsigned long long)numberOfStrokes;
-(void)layoutSubviews;
-(UIBezierPath *)currentPath;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelTouchTracking;
-(UIImageView *)snapshotView;
-(void)setSnapshotView:(UIImageView *)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)setCurrentPath:(UIBezierPath *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)updateInkColor;
-(CGColorRef)inkColor;
-(double)pageOffset;
-(NSMutableArray *)interpolatedPoints;
-(void)recreateInkMaskIfNeeded;
-(CGImageRef)inkMask;
-(UIKBHandwritingBezierPathPointFIFO *)bezierPathFIFO;
-(double)inkWidth;
-(void)setInkMask:(CGImageRef)arg1 ;
-(void)setInputSpeedModel:(UIKBHandwritingInputSpeedModel *)arg1 ;
-(UIKBHandwritingInputSpeedModel *)inputSpeedModel;
-(void)setActiveTouches:(NSMutableSet *)arg1 ;
-(void)setInkWidth:(double)arg1 ;
-(void)setStrokeView:(UIKBHandwritingStrokeView *)arg1 ;
-(void)setInterpolatedPoints:(NSMutableArray *)arg1 ;
-(void)setCurrentPoints:(NSMutableArray *)arg1 ;
-(void)setInterpolatingFIFO:(UIKBHandwritingQuadCurvePointFIFO *)arg1 ;
-(UIKBHandwritingQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setBezierPathFIFO:(UIKBHandwritingBezierPathPointFIFO *)arg1 ;
-(void)setSmoothingFIFO:(UIKBHandwritingBoxcarFilterPointFIFO *)arg1 ;
-(UIKBHandwritingBoxcarFilterPointFIFO *)smoothingFIFO;
-(void)setStrokeFIFO:(UIKBHandwritingStrokePointFIFO *)arg1 ;
-(UIKBHandwritingStrokeView *)strokeView;
-(id)layerForRenderFlags:(long long)arg1 ;
-(void)cancelPageOffsetTimer;
-(UIKBHandwritingStrokePointFIFO *)strokeFIFO;
-(UIDelayedAction *)nextPageTimer;
-(void)pageOffsetTimerFired;
-(void)setNextPageTimer:(UIDelayedAction *)arg1 ;
-(void)startFadeOutAnimation;
-(void)setPageOffset:(double)arg1 ;
-(void)clearAndNotify:(BOOL)arg1 ;
-(void)setInkColor:(CGColorRef)arg1 ;
-(NSMutableArray *)currentPoints;
-(NSMutableSet *)activeTouches;
-(void)setInitialPointPosted:(BOOL)arg1 ;
-(void)setPreviousPoint:(SCD_Struct_UI80)arg1 ;
-(BOOL)initialPointPosted;
-(SCD_Struct_UI80)previousPoint;
-(void)addInkPoint:(CGPoint)arg1 value:(double)arg2 ;
-(void)touchPageOffsetTimer;
-(BOOL)endStrokeWithTouches:(id)arg1 event:(id)arg2 ;
-(void)deleteStrokesAtIndexes:(id)arg1 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 ;
-(void)clearTouches;
@end


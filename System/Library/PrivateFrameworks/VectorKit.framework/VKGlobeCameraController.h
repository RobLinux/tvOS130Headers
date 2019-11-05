/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKScreenCameraController.h>
#import <VectorKit/VKGesturingCameraController.h>

@class NSString;

@interface VKGlobeCameraController : VKScreenCameraController <VKGesturingCameraController> {

	GlobeView* _globeView;
	CameraManager* _cameraManager;
	double _currentDoublePanPitch;
	BOOL _isPitching;
	BOOL _isRotating;
	BOOL _wasPitched;
	BOOL _couldEnter3DMode;
	double _currentZoomLevel;
	double _maxZoomLevel;
	double _minZoomLevel;
	double _lastRotation;
	CGPoint _panStartScreenPoint;
	CGPoint _panLastScreenPoint;
	double _beganDoublePanPitch;
	shared_ptr<md::TaskContext>* _taskContext;
	BOOL _tourShouldResumeWhenDoneGesturing;

}

@property (assign,nonatomic) GlobeView* globeView;                                //@synthesize globeView=_globeView - In the implementation block
@property (assign,nonatomic) BOOL tourShouldResumeWhenDoneGesturing;              //@synthesize tourShouldResumeWhenDoneGesturing=_tourShouldResumeWhenDoneGesturing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)tileSize;
-(double)pitch;
-(double)heading;
-(double)altitude;
-(id)mapRegion;
-(id)viewportInfo;
-(CGSize)centerCoordinate;
-(void)updateState;
-(void)setMinZoomLevel:(double)arg1 ;
-(void)setMaxZoomLevel:(double)arg1 ;
-(double)currentZoomLevel;
-(void)setGesturing:(BOOL)arg1 ;
-(BOOL)canEnter3DMode;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(void)pauseFlyoverTourAnimation;
-(void)resumeFlyoverTourAnimation;
-(void)enter3DMode;
-(void)exit3DMode;
-(BOOL)isPitched;
-(BOOL)isFullyPitched;
-(GlobeView*)globeView;
-(void)setTourShouldResumeWhenDoneGesturing:(BOOL)arg1 ;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)setCenterCoordinateDistanceRange:(CGSize)arg1 duration:(double)arg2 timingFunction:(/*^block*/id)arg3 ;
-(void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(/*^block*/id)arg3 ;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(double)presentationYaw;
-(double)minimumZoomLevel;
-(double)maximumZoomLevel;
-(double)topDownMinimumZoomLevel;
-(double)distanceFromCenterCoordinate;
-(void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)snapMapIfNecessary:(BOOL)arg1 ;
-(void)setCenterCoordinate3D:(SCD_Struct_VK52)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(id)initWithTaskContext:(shared_ptr<md::TaskContext>*)arg1 mapDataAccess:(MapDataAccess*)arg2 animationRunner:(AnimationRunner*)arg3 runLoopController:(RunLoopController*)arg4 cameraDelegate:(id)arg5 ;
-(Geocentric<double>)cameraPosition;
-(double)_fovAdjustment;
-(void)setCurrentZoomLevel:(double)arg1 ;
-(void)setGlobeView:(GlobeView*)arg1 ;
-(void)_updateGlobeFromCamera;
-(/*^block*/id)createMoveToZoomOutZoomInFrameFunction:(CameraFrame<geo::Radians, double>)arg1 toLatLon:(CameraFrame<geo::Radians, double>)arg2 ;
-(void)flyoverTourAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(/*^block*/id)arg3 stateChange:(/*^block*/id)arg4 ;
-(void)stopFlyoverTourAnimation;
-(void)updateCameraManager;
-(void)_updateIsPitched;
-(void)_updateCanEnter3DMode;
-(void)moveTo:(CGSize)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)moveToZoomOutZoomInTransition:(CGSize)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(void)moveTo:(CGSize)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(void)tiltTo:(double)arg1 animated:(BOOL)arg2 exaggerate:(BOOL)arg3 ;
-(void)rotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)pitch:(CGPoint)arg1 translation:(double)arg2 ;
-(void)zoomToDistance:(CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopGlobeAnimations;
-(BOOL)isFlyoverTourStarted;
-(void)interruptFlyoverTourAnimation;
-(void)rotateTo:(double)arg1 animated:(BOOL)arg2 ;
-(CGSize)_centerCoordinateForMapRegion:(id)arg1 ;
-(double)earthRadiusAt:(double)arg1 ;
-(double)geocAngleBetween:(CGSize)arg1 andCoordinate:(CGSize)arg2 ;
-(double)widestLatitudeForMapRegion:(id)arg1 ;
-(double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3 ;
-(double)zoomForMapRegion:(id)arg1 ;
-(void)animateRegionWithDuration:(double)arg1 timingFunction:(/*^block*/id)arg2 cursor:(Matrix<int, 2, 1>)arg3 stepHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(/*^block*/id)arg3 ;
-(void)zoomToDistance:(CGPoint)arg1 distance:(double)arg2 time:(double)arg3 ;
-(float)slowDownFactorFromLoadProgress;
-(void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2 ;
-(BOOL)tourShouldResumeWhenDoneGesturing;
@end


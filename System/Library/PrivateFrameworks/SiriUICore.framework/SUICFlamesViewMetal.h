/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <MetalKit/MTKView.h>
#import <SiriUICore/SUICFlamesViewProviding.h>

@protocol MTLRenderPipelineState, MTLCommandQueue, MTLBuffer, SUICFlamesViewProvidingDelegate;
@class CADisplayLink, NSMutableSet, NSMutableArray, SUICFlameGroup, UIScreen, UIImageView, SUICAudioLevelSmoother, UIColor, UIImage, NSString;

@interface SUICFlamesViewMetal : MTKView <SUICFlamesViewProviding> {

	CADisplayLink* _displayLink;
	long long _currentContextCount;
	NSMutableSet* _renderingDisabledReasons;
	unsigned _framebufferHandle;
	unsigned _renderbufferHandle;
	int _flameProgramHandle;
	int _auraProgramHandle;
	int _vShadID;
	int _fShadID;
	unsigned _vertexArrayObjectHandle;
	unsigned _vertexBufferHandle;
	unsigned _elementArrayHandle;
	unsigned long long _numIndices;
	unsigned long long _numVertices;
	unsigned _numAuraIndices;
	unsigned _numAuraIndicesCulled;
	unsigned _numWaveIndices;
	unsigned _maxVertexCircles;
	unsigned _auraVertexCircles;
	float _maxSubdivisionLevel;
	float _auraMinSubdivisionLevel;
	float _auraMaxSubdivisionLevel;
	NSMutableArray* _flameGroups;
	SUICFlameGroup* _currentFlameGroup;
	float _viewWidth;
	float _viewHeight;
	float _dictationUnitSize;
	UIScreen* _screen;
	UIImageView* _overlayImageView;
	double _startTime;
	double _dictationRedColor;
	double _dictationGreenColor;
	double _dictationBlueColor;
	SUICAudioLevelSmoother* _levelSmoother;
	long long _fidelity;
	double _frameRateScalingFactor;
	BOOL _transitionFinished;
	BOOL _isInitialized;
	BOOL _hasCustomActiveFrame;
	BOOL _shadersAreCompiled;
	BOOL _reduceMotionEnabled;
	id<MTLRenderPipelineState> _pipelineState[4];
	id<MTLCommandQueue> _commandQueue;
	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _indexBuffer;
	 _viewportSize;
	BOOL _accelerateTransitions;
	BOOL _showAura;
	BOOL _freezesAura;
	BOOL _reduceFrameRate;
	BOOL _reduceThinkingFramerate;
	BOOL _renderInBackground;
	BOOL _flamesPaused;
	id<SUICFlamesViewProvidingDelegate> _flamesDelegate;
	long long _state;
	UIColor* _dictationColor;
	double _horizontalScaleFactor;
	long long _mode;
	UIImage* _overlayImage;
	CGRect _activeFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isRenderingEnabled; 
@property (assign,nonatomic,__weak) id<SUICFlamesViewProvidingDelegate> flamesDelegate;              //@synthesize flamesDelegate=_flamesDelegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                         //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long state;                                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL showAura;                                                          //@synthesize showAura=_showAura - In the implementation block
@property (assign,nonatomic) BOOL freezesAura;                                                       //@synthesize freezesAura=_freezesAura - In the implementation block
@property (assign,nonatomic) BOOL reduceFrameRate;                                                   //@synthesize reduceFrameRate=_reduceFrameRate - In the implementation block
@property (assign,nonatomic) BOOL reduceThinkingFramerate;                                           //@synthesize reduceThinkingFramerate=_reduceThinkingFramerate - In the implementation block
@property (assign,nonatomic) CGRect activeFrame;                                                     //@synthesize activeFrame=_activeFrame - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                                 //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,retain) UIColor * dictationColor;                                               //@synthesize dictationColor=_dictationColor - In the implementation block
@property (assign,nonatomic) BOOL renderInBackground;                                                //@synthesize renderInBackground=_renderInBackground - In the implementation block
@property (assign,nonatomic) BOOL flamesPaused;                                                      //@synthesize flamesPaused=_flamesPaused - In the implementation block
@property (assign,nonatomic) double horizontalScaleFactor;                                           //@synthesize horizontalScaleFactor=_horizontalScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL accelerateTransitions;                                             //@synthesize accelerateTransitions=_accelerateTransitions - In the implementation block
+(Class)layerClass;
+(BOOL)_supportsAdaptiveFramerate;
+(void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 fidelity:(long long)arg3 ;
+(void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 fidelity:(long long)arg3 prewarmInBackground:(BOOL)arg4 ;
+(void)prewarmShadersForScreen:(id)arg1 initialFrame:(CGRect)arg2 activeFrame:(CGRect)arg3 fidelity:(long long)arg4 prewarmInBackground:(BOOL)arg5 ;
+(id)_indexCache;
+(void)prewarmShadersForScreen:(id)arg1 size:(CGSize)arg2 ;
+(void)prewarmShadersForScreen:(id)arg1 activeFrame:(CGRect)arg2 fidelity:(long long)arg3 ;
+(void)setIndexCacheSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setMode:(long long)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)mode;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)layoutSubviews;
-(long long)_preferredFramesPerSecond;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)_metalLayer;
-(double)_currentDisplayScale;
-(unsigned)_numVerticesPerCircle;
-(void)_reduceMotionStatusChanged:(id)arg1 ;
-(void)_setValuesForFidelity:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3 ;
-(void)_tearDownDisplayLink;
-(void)_setupDisplayLink;
-(void)_setPreferredFramesPerSecond;
-(void)_updateDisplayLinkPausedState;
-(void)setRenderInBackground:(BOOL)arg1 ;
-(void)setActiveFrame:(CGRect)arg1 ;
-(void)_prewarmShaders;
-(void)_updateCurveLayer:(id)arg1 ;
-(BOOL)isRenderingEnabled;
-(void)resetAndReinitialize:(BOOL)arg1 ;
-(void)setRenderingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(2)_predeterminedVertexPositionForAuraWithPolarVertex:;
-(int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned*)arg4 atStartIndex:(int)arg5 withFill:(BOOL)arg6 withCullingForAura:(BOOL)arg7 forVertices:({?=}*)arg8 ;
-(BOOL)_setupVertexBuffer;
-(BOOL)_resizeFromLayer:(id)arg1 ;
-(void)_updateOrthoProjection;
-(BOOL)_deviceNeeds2xFlamesWithCurrentScale:(double)arg1 ;
-(BOOL)_isOriginatingProcessInBackground;
-(float)_currentMicPowerLevel;
-(id<SUICFlamesViewProvidingDelegate>)flamesDelegate;
-(void)_didFinishTransition;
-(void)prewarmShadersForCurrentMode;
-(void)fadeOutCurrentAura;
-(void)setFlamesDelegate:(id<SUICFlamesViewProvidingDelegate>)arg1 ;
-(BOOL)showAura;
-(void)setShowAura:(BOOL)arg1 ;
-(BOOL)freezesAura;
-(void)setFreezesAura:(BOOL)arg1 ;
-(BOOL)reduceFrameRate;
-(void)setReduceFrameRate:(BOOL)arg1 ;
-(BOOL)reduceThinkingFramerate;
-(void)setReduceThinkingFramerate:(BOOL)arg1 ;
-(CGRect)activeFrame;
-(UIColor *)dictationColor;
-(void)setDictationColor:(UIColor *)arg1 ;
-(BOOL)renderInBackground;
-(BOOL)flamesPaused;
-(void)setFlamesPaused:(BOOL)arg1 ;
-(double)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(double)arg1 ;
-(BOOL)accelerateTransitions;
-(void)setAccelerateTransitions:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 screenScale:(double)arg2 fidelity:(long long)arg3 ;
-(BOOL)inSiriMode;
-(BOOL)inDictationMode;
-(BOOL)_initMetalAndSetupDisplayLink:(BOOL)arg1 ;
-(BOOL)_loadPipelineLibraries;
-(void)_didSkipFrameUpdateWithReason:(id)arg1 andCount:(unsigned long long)arg2 ;
@end


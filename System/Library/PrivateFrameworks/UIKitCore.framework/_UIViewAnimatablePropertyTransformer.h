/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _UICompoundObjectMap, NSMutableSet;

@interface _UIViewAnimatablePropertyTransformer : NSObject {

	BOOL _presentationValueCallbackRan;
	NSObject*<OS_dispatch_queue> _lockingQueue;
	/*^block*/id _modelValueChangedCallback;
	/*^block*/id _presentationValueChangedCallback;
	/*^block*/id _stabilizedCallback;
	_UICompoundObjectMap* _capturedProperties;
	NSMutableSet* _runningProgresses;

}

@property (nonatomic,copy) id modelValueChangedCallback;                             //@synthesize modelValueChangedCallback=_modelValueChangedCallback - In the implementation block
@property (nonatomic,copy) id presentationValueChangedCallback;                      //@synthesize presentationValueChangedCallback=_presentationValueChangedCallback - In the implementation block
@property (nonatomic,copy) id stabilizedCallback;                                    //@synthesize stabilizedCallback=_stabilizedCallback - In the implementation block
@property (nonatomic,retain) _UICompoundObjectMap * capturedProperties;              //@synthesize capturedProperties=_capturedProperties - In the implementation block
@property (nonatomic,retain) NSMutableSet * runningProgresses;                       //@synthesize runningProgresses=_runningProgresses - In the implementation block
-(void)modelValueUpdatedForProgress:(id)arg1 ;
-(_UICompoundObjectMap *)capturedProperties;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(void)presentationValueUpdatedForProgress:(id)arg1 ;
-(void)presentationValueStabilizedForProgress:(id)arg1 ;
-(void)progressInvalidated:(id)arg1 ;
-(void)setCapturedProperties:(_UICompoundObjectMap *)arg1 ;
-(void)setModelValueChangedCallback:(id)arg1 ;
-(void)setPresentationValueChangedCallback:(id)arg1 ;
-(void)setStabilizedCallback:(id)arg1 ;
-(void)setRunningProgresses:(NSMutableSet *)arg1 ;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 stabilizedCallback:(/*^block*/id)arg4 allowsProgressAnimatableProperties:(BOOL)arg5 ;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 stabilizedCallback:(/*^block*/id)arg4 ;
-(NSMutableSet *)runningProgresses;
-(id)presentationValueChangedCallback;
-(id)modelValueChangedCallback;
-(id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 ;
-(id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(/*^block*/id)arg2 presentationValueSetter:(/*^block*/id)arg3 ;
-(id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(/*^block*/id)arg2 ;
-(id)stabilizedCallback;
@end


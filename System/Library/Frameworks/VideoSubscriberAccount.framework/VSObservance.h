/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSObservanceDelegate;
@class NSString;

@interface VSObservance : NSObject {

	BOOL _observing;
	id _object;
	NSString* _keyPath;
	unsigned long long _options;
	id<VSObservanceDelegate> _delegate;

}

@property (assign,getter=isObserving,nonatomic) BOOL observing;                     //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) id object;                                           //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                             //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<VSObservanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)object;
-(unsigned long long)options;
-(id<VSObservanceDelegate>)delegate;
-(void)setDelegate:(id<VSObservanceDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObserving;
-(void)stopObserving;
-(NSString *)keyPath;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)isObserving;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AVKeyValueObserverCollection : NSObject {

	NSMutableDictionary* _keyObserverMap;
	id _rootObject;

}

@property (readonly) NSMutableDictionary * keyObserverMap;              //@synthesize keyObserverMap=_keyObserverMap - In the implementation block
@property (readonly) id rootObject;                                     //@synthesize rootObject=_rootObject - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)rootObject;
-(id)initWithObservedObject:(id)arg1 ;
-(void)startObservingKeyPath:(id)arg1 options:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)stopObservingKeyPath:(id)arg1 ;
-(void)startObservingKeyPath:(id)arg1 options:(unsigned long long)arg2 selector:(SEL)arg3 ;
-(void)bindKeyPath:(id)arg1 toKeyPath:(id)arg2 nilNumber:(id)arg3 ;
-(void)bindKeyPath:(id)arg1 toKeyPath:(id)arg2 ;
-(void)bindKeyPath:(id)arg1 toBoolKeyPath:(id)arg2 ;
-(NSMutableDictionary *)keyObserverMap;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVKeyValueChange : NSObject {

	id _value;
	id _oldValue;
	NSString* _keyPath;
	id _observationToken;

}

@property (nonatomic,readonly) id value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) id oldValue;                      //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,readonly) NSString * keyPath;               //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) id observationToken;              //@synthesize observationToken=_observationToken - In the implementation block
-(id)value;
-(NSString *)keyPath;
-(id)oldValue;
-(id)initWithValue:(id)arg1 oldValue:(id)arg2 keyPath:(id)arg3 observationToken:(id)arg4 ;
-(id)observationToken;
@end


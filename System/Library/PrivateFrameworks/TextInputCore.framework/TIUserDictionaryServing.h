/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol TIUserDictionaryServing <NSObject>
@property (nonatomic,copy,readonly) NSUUID * userDictionaryUUID; 
@required
-(void)removeObserver:(id)arg1;
-(id)addObserver:(/*^block*/id)arg1;
-(NSUUID *)userDictionaryUUID;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1;
-(void)startServer;

@end


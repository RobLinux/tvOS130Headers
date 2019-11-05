/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TICandidateHandler.h>

@protocol TIClientProxy, TIKeyboardInputManagerLogging;
@class TIKeyboardInputManagerBase, TICandidateRequestToken, TIKeyboardState;

@interface TIStreamingCandidateHandler : NSObject <TICandidateHandler> {

	unsigned long long _status;
	BOOL _didCallHandler;
	TIKeyboardInputManagerBase* _inputManager;
	id<TIClientProxy> _clientProxy;
	TICandidateRequestToken* _requestToken;
	/*^block*/id _candidateHandler;
	TIKeyboardState* _keyboardState;
	id<TIKeyboardInputManagerLogging> _logger;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                              //@synthesize keyboardState=_keyboardState - In the implementation block
@property (assign,nonatomic,__weak) id<TIKeyboardInputManagerLogging> logger;              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<TIClientProxy> clientProxy;                              //@synthesize clientProxy=_clientProxy - In the implementation block
@property (nonatomic,readonly) TICandidateRequestToken * requestToken;                     //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,copy,readonly) id candidateHandler;                                   //@synthesize candidateHandler=_candidateHandler - In the implementation block
@property (nonatomic,readonly) BOOL asynchronous; 
-(void)dealloc;
-(void)open;
-(void)close;
-(id<TIKeyboardInputManagerLogging>)logger;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TICandidateRequestToken *)requestToken;
-(void)setLogger:(id<TIKeyboardInputManagerLogging>)arg1 ;
-(id<TIClientProxy>)clientProxy;
-(void)pushCandidates:(id)arg1 ;
-(BOOL)asynchronous;
-(id)candidateHandler;
-(id)initWithClientProxy:(id)arg1 keyboardState:(id)arg2 requestToken:(id)arg3 logger:(id)arg4 inputManager:(id)arg5 candidateHandler:(/*^block*/id)arg6 ;
@end


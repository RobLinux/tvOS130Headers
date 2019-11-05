/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RETokenBuffer.h>

@protocol REScriptBuffer, REScriptTokenizerDelegate;
@class REScriptToken, NSString;

@interface REScriptTokenizer : NSObject <RETokenBuffer> {

	id<REScriptBuffer> _buffer;
	REScriptToken* _currentToken;
	unsigned long long _line;
	unsigned long long _column;
	id<REScriptTokenizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<REScriptTokenizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
-(BOOL)isEmpty;
-(id<REScriptTokenizerDelegate>)delegate;
-(void)setDelegate:(id<REScriptTokenizerDelegate>)arg1 ;
-(void)next;
-(id)_readString;
-(REScriptToken *)currentToken;
-(void)_consumeWhitespace;
-(BOOL)_hasChar;
-(BOOL)_matchTokenStart:(/*function pointer*/void*)arg1 body:(/*function pointer*/void*)arg2 value:(id*)arg3 ;
-(unsigned short)_peekChar;
-(void)_popChar;
-(id)_readSingleComment;
-(id)_readMultilineComment;
-(void)_validateToken;
-(id)initWithScriptBuffer:(id)arg1 ;
@end


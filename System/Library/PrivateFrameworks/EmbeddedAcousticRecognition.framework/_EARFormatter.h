/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString;

@interface _EARFormatter : NSObject {

	unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN> >* _itn;
	NSString* _language;

}

@property (nonatomic,copy) NSString * language;              //@synthesize language=_language - In the implementation block
+(void)initialize;
+(BOOL)supportedByQuasarConfig:(id)arg1 ;
+(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)convertStringsToQuasarTokens:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)formatWords:(const vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 task:(id)arg2 ;
-(id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3 ;
-(id)initWithQuasarConfig:(id)arg1 ;
-(id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3 ;
-(id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 ;
-(id)formattedStringWithStrings:(id)arg1 ;
-(id)formattedStringWithStrings:(id)arg1 task:(id)arg2 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)getOrthography:(const vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 ;
-(id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3 ;
-(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)formatWords:(const vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 ;
-(id)initWithQuasarConfig:(id)arg1 language:(id)arg2 ;
-(id)formattedRecognitionWithNBestList:(id)arg1 ;
@end


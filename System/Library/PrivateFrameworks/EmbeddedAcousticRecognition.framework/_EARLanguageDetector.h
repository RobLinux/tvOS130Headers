/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageDetector : NSObject {

	unique_ptr<quasar::LanguageDetector, std::__1::default_delete<quasar::LanguageDetector> >* languageDetector;

}
+(void)initialize;
+(vector<std::__1::optional<quasar::Locale>, std::__1::allocator<std::__1::optional<quasar::Locale> > >*)quasarLocalesOfMessages:(id)arg1 ;
+(shared_ptr<const quasar::LDContext>*)updateContext:(const LDContext*)arg1 withMessageLocales:(const vector<std::__1::optional<quasar::Locale>, std::__1::allocator<std::__1::optional<quasar::Locale> > >*)arg2 ;
+(id)localesOfMessages:(id)arg1 ;
-(id)initWithConfigFile:(id)arg1 ;
-(id)initWithConfigFile:(id)arg1 overrides:(id)arg2 ;
-(id)startRequestWith:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3 ;
@end


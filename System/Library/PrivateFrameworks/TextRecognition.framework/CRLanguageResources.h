/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSLocale;

@interface CRLanguageResources : NSObject {

	NSLocale* _locale;
	void* _characterLanguageModel;
	const LXLexiconRef _staticLexicon;
	void* _wordLanguageModel;

}

@property (nonatomic,readonly) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) void* characterLanguageModel;                  //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (assign,nonatomic) const LXLexiconRef staticLexicon;              //@synthesize staticLexicon=_staticLexicon - In the implementation block
@property (assign,nonatomic) void* wordLanguageModel;                       //@synthesize wordLanguageModel=_wordLanguageModel - In the implementation block
+(id)languageResourcesForLanguageIdentifier:(id)arg1 index:(long long)arg2 ;
+(BOOL)isLanguageSupported:(id)arg1 ;
+(void*)createCharacterModel:(id)arg1 ;
+(LXLexiconRef)createStaticLexicon:(id)arg1 ;
+(void*)createWordLanguageModel:(id)arg1 ;
-(void)dealloc;
-(NSLocale *)locale;
-(void*)characterLanguageModel;
-(void)setCharacterLanguageModel:(void*)arg1 ;
-(const LXLexiconRef)staticLexicon;
-(void)setStaticLexicon:(const LXLexiconRef)arg1 ;
-(id)initWithLanguageIdentifier:(id)arg1 ;
-(void*)wordLanguageModel;
-(void)setWordLanguageModel:(void*)arg1 ;
@end


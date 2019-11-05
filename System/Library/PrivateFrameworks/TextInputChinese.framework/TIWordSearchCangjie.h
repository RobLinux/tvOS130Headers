/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputChinese/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
-(int)mecabraInputMethodType;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(BOOL)validateCode:(id)arg1 withOption:(unsigned long long)arg2 ;
-(BOOL)suchengEnabled;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(void)setSupportsEnglish:(BOOL)arg1 ;
@end


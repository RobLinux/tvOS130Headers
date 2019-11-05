/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface TVCKStoreBumperConfig : NSObject {

	NSURL* _videoURL;
	NSString* _warningTextFormatString;
	NSString* _appleIDFormatString;
	NSString* _logoURLTemplateString;
	double _textDwellTime;

}

@property (nonatomic,retain) NSURL * videoURL;                                //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) NSString * warningTextFormatString;              //@synthesize warningTextFormatString=_warningTextFormatString - In the implementation block
@property (nonatomic,retain) NSString * appleIDFormatString;                  //@synthesize appleIDFormatString=_appleIDFormatString - In the implementation block
@property (nonatomic,retain) NSString * logoURLTemplateString;                //@synthesize logoURLTemplateString=_logoURLTemplateString - In the implementation block
@property (assign,nonatomic) double textDwellTime;                            //@synthesize textDwellTime=_textDwellTime - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setTextDwellTime:(double)arg1 ;
-(NSString *)warningTextFormatString;
-(NSString *)appleIDFormatString;
-(double)textDwellTime;
-(void)setWarningTextFormatString:(NSString *)arg1 ;
-(void)setAppleIDFormatString:(NSString *)arg1 ;
-(NSString *)logoURLTemplateString;
-(void)setLogoURLTemplateString:(NSString *)arg1 ;
@end


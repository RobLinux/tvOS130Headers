/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriContext.h>

@class AFSpeechRequestOptions, AFRequestInfo, NSDictionary;

@interface SiriContinuityContext : SiriContext {

	AFSpeechRequestOptions* _speechRequestOptions;
	AFRequestInfo* _requestInfo;
	NSDictionary* _userActivity;

}

@property (nonatomic,readonly) AFSpeechRequestOptions * speechRequestOptions; 
@property (nonatomic,readonly) AFRequestInfo * requestInfo;                                //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * userActivity;                                //@synthesize userActivity=_userActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AFRequestInfo *)requestInfo;
-(id)initWithRequestInfo:(id)arg1 ;
-(NSDictionary *)userActivity;
-(id)initWithUserActivity:(id)arg1 ;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(id)initWithSpeechRequestOptions:(id)arg1 ;
@end


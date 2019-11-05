/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WFResponse, WFTaskIdentifier;


@protocol WFLocationQuery <NSObject>
@property (readonly) WFResponse * response; 
@property (retain) WFTaskIdentifier * identifier; 
@required
-(WFTaskIdentifier *)identifier;
-(WFResponse *)response;
-(void)start;
-(void)setIdentifier:(id)arg1;

@end


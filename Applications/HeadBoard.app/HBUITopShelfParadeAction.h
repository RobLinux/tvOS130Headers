/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSProgress;


@protocol HBUITopShelfParadeAction <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * imageName; 
@property (nonatomic,readonly) NSProgress * installApplicationProgress; 
@required
-(NSString *)title;
-(NSString *)imageName;
-(NSProgress *)installApplicationProgress;

@end


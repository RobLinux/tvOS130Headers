/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol TVSMModule <NSObject>
@property (assign,nonatomic,__weak) id<TVSMModuleDelegate> delegate; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) UIViewController*<TVSMModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<TVSMModuleExpandedContentViewController> expandedContentViewController; 
@property (nonatomic,readonly) NSArray * childModules; 
@optional
-(UIViewController*<TVSMModuleExpandedContentViewController>)expandedContentViewController;
-(NSArray *)childModules;

@required
+(long long)buttonStyle;
-(long long)type;
-(id<TVSMModuleDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIViewController*<TVSMModuleContentViewController>)contentViewController;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFStorageServiceAction : WFAction

@property (nonatomic,readonly) id<WFFileStorageService> selectedStorageService; 
@property (nonatomic,readonly) BOOL showsFilePicker; 
-(id)keywords;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filenamePlaceholderText;
-(id<WFFileStorageService>)selectedStorageService;
-(BOOL)showsFilePicker;
-(id)requiredResources;
-(BOOL)showsSettingsWhenResourcesUnavailable;
-(void)updatePathPrefix;
-(id)filePathKey;
-(id)showPickerKey;
-(void)selectedStorageServiceChanged;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/DOMHTMLElement.h>
#import <UIKit/UITextInputTraits.h>

@class NSString, UITextInputPasswordRules, DOMHTMLFormElement, DOMFileList, NSURL;

@interface DOMHTMLInputElement : DOMHTMLElement <UITextInputTraits>

@property (copy) NSString * accept; 
@property (copy) NSString * alt; 
@property (assign) BOOL autofocus; 
@property (assign) BOOL defaultChecked; 
@property (assign) BOOL checked; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (retain) DOMFileList * files; 
@property (assign) BOOL indeterminate; 
@property (assign) int maxLength; 
@property (assign) BOOL multiple; 
@property (copy) NSString * name; 
@property (assign) BOOL readOnly; 
@property (copy) NSString * size; 
@property (copy) NSString * src; 
@property (copy) NSString * type; 
@property (copy) NSString * defaultValue; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
@property (assign) int selectionStart; 
@property (assign) int selectionEnd; 
@property (copy) NSString * align; 
@property (copy) NSString * useMap; 
@property (copy) NSString * accessKey; 
@property (copy,readonly) NSString * altDisplayString; 
@property (copy,readonly) NSURL * absoluteImageURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
-(BOOL)isSecure;
-(long long)keyboardType;
-(id)text;
-(BOOL)isEditing;
-(id)textInputTraits;
-(id)createPeripheral;
-(BOOL)isAssistedDateType;
-(void)_accessoryClear;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)nodeCanBecomeFirstResponder;
-(void)_startAssistingDocumentView:(id)arg1 ;
-(void)_stopAssistingDocumentView:(id)arg1 ;
-(BOOL)_requiresAccessoryView;
-(BOOL)_requiresInputView;
-(BOOL)_supportsAutoFill;
-(BOOL)_supportsAccessoryClear;
-(id)_textFormElement;
-(BOOL)isTextControl;
-(BOOL)isLikelyToBeginPageLoad;
-(NSString *)name;
-(void)select;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)size;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setMax:(id)arg1 ;
-(id)max;
-(id)pattern;
-(void)setIndeterminate:(BOOL)arg1 ;
-(id)step;
-(id)list;
-(id)min;
-(unsigned)width;
-(unsigned)height;
-(BOOL)required;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setSize:(NSString *)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)defaultValue;
-(id)placeholder;
-(BOOL)capture;
-(int)maxLength;
-(void)setMaxLength:(int)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(id)labels;
-(void)setStep:(id)arg1 ;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(id)_autofillContext;
-(BOOL)_isTextField;
-(BOOL)_isEdited;
-(int)_autocapitalizeType;
-(void)setValueWithChangeEvent:(id)arg1 ;
-(void)setValueAsNumberWithChangeEvent:(double)arg1 ;
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)alt;
-(void)setAlt:(NSString *)arg1 ;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(BOOL)willValidate;
-(void)click;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(id)autocomplete;
-(void)setAutocomplete:(id)arg1 ;
-(BOOL)checkValidity;
-(NSString *)useMap;
-(void)setUseMap:(NSString *)arg1 ;
-(NSString *)altDisplayString;
-(NSURL *)absoluteImageURL;
-(NSString *)accept;
-(void)setAccept:(NSString *)arg1 ;
-(BOOL)defaultChecked;
-(void)setDefaultChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)setChecked:(BOOL)arg1 ;
-(id)dirName;
-(void)setDirName:(id)arg1 ;
-(DOMFileList *)files;
-(void)setFiles:(DOMFileList *)arg1 ;
-(id)formAction;
-(void)setFormAction:(id)arg1 ;
-(id)formEnctype;
-(void)setFormEnctype:(id)arg1 ;
-(id)formMethod;
-(void)setFormMethod:(id)arg1 ;
-(BOOL)formNoValidate;
-(void)setFormNoValidate:(BOOL)arg1 ;
-(id)formTarget;
-(void)setFormTarget:(id)arg1 ;
-(BOOL)indeterminate;
-(void)setMin:(id)arg1 ;
-(BOOL)multiple;
-(void)setMultiple:(BOOL)arg1 ;
-(void)setPattern:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(BOOL)readOnly;
-(double)valueAsDate;
-(void)setValueAsDate:(double)arg1 ;
-(double)valueAsNumber;
-(void)setValueAsNumber:(double)arg1 ;
-(id)validationMessage;
-(int)selectionStart;
-(void)setSelectionStart:(int)arg1 ;
-(int)selectionEnd;
-(void)setSelectionEnd:(int)arg1 ;
-(id)selectionDirection;
-(void)setSelectionDirection:(id)arg1 ;
-(BOOL)incremental;
-(void)setIncremental:(BOOL)arg1 ;
-(void)setCapture:(BOOL)arg1 ;
-(void)stepUp:(int)arg1 ;
-(void)stepDown:(int)arg1 ;
-(void)setCustomValidity:(id)arg1 ;
-(void)setRangeText:(id)arg1 ;
-(void)setRangeText:(id)arg1 start:(unsigned)arg2 end:(unsigned)arg3 selectionMode:(id)arg4 ;
-(void)setSelectionRange:(int)arg1 end:(int)arg2 ;
-(void)setValueForUser:(id)arg1 ;
-(void)insertTextSuggestion:(id)arg1 ;
-(int)structuralComplexityContribution;
-(BOOL)_isAutofilled;
-(void)_setAutofilled:(BOOL)arg1 ;
-(id)startPosition;
-(id)endPosition;
@end


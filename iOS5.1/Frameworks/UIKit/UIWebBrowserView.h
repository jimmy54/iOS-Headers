/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

#import "UIBrowserDocumentController-Protocol.h"
#import "UIWebFormAccessoryDelegate-Protocol.h"

@class DOMNode, NSMutableArray, NSObject<UIFormPeripheral>, NSTimer, UIResponder, UIWebFormAccessory, UIWebFormDelegate, UIWebPDFView, UIWebTouchEventsGestureRecognizer;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController>
{
    UIWebFormAccessory *_accessory;
    NSObject<UIFormPeripheral> *_input;
    DOMNode *_currentAssistedNode;
    struct CGRect _inputViewBounds;
    struct CGRect _addressViewBounds;
    float _lastAdjustmentForScroller;
    unsigned int _accessoryEnabled:1;
    unsigned int _forceInputView:1;
    unsigned int _formIsAutoFilling:1;
    unsigned int _inputViewObeysDOMFocus:1;
    unsigned int _hasEditedTextField:1;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    UIResponder *_editingDelegateForEverythingExceptForms;
    unsigned int _dispatchedTouchEvents;
    NSMutableArray *_deferredTouchEvents;
    struct {
        NSMutableArray *all;
        NSMutableArray *html;
        NSMutableArray *javascript;
        NSMutableArray *css;
        NSMutableArray *error;
        NSMutableArray *warning;
        NSMutableArray *tip;
        NSMutableArray *log;
    } _messages;
    struct {
        UIWebPDFView *view;
        NSTimer *timer;
    } _pdf;
}

+ (id)_PDFPageNumberLabel:(BOOL)arg1;
+ (BOOL)isAutoFillAllowed;
+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;
+ (float)preferredScrollDecelerationFactor;
@property(readonly, nonatomic) BOOL hasEditedTextField; // @synthesize hasEditedTextField=_hasEditedTextField;
@property(nonatomic) struct CGRect inputViewBounds; // @synthesize inputViewBounds=_inputViewBounds;
@property(nonatomic) BOOL inputViewObeysDOMFocus; // @synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus;
@property(nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled; // @synthesize accessoryEnabled=_accessoryEnabled;
@property(nonatomic) UIResponder *_editingDelegateForEverythingExceptForms; // @synthesize _editingDelegateForEverythingExceptForms;
@property(retain, nonatomic) DOMNode *_currentAssistedNode; // @synthesize _currentAssistedNode;
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input; // @synthesize _input;
@property(retain, nonatomic) UIWebFormAccessory *_accessory; // @synthesize _accessory;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (void)_setUIWebViewUserAgent;
- (void)_setBrowserUserAgentProductVersion:(id)arg1 bundleVersion:(id)arg2;
- (id)_buildVersion;
- (void)_startURLificationIfNeededCoalesce:(BOOL)arg1;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_clearSelectionAndUI;
- (void)_dumpWebArchiveAtPath:(id)arg1;
- (id)_requestWithUDIDHeaderIfAppropriate:(id)arg1;
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)arg1;
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGPoint)_originForPDFPageLabelInSuperview:(id)arg1;
- (unsigned int)_firstVisiblePDFPageNumber;
- (void)_clearAllConsoleMessages;
- (void)clearMessagesMatchingMask:(int)arg1;
- (id)messagesMatchingMask:(int)arg1;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)_setAddressViewFrame:(struct CGRect)arg1;
- (void)_rotateEnclosingScrollView:(id)arg1 toFrame:(struct CGRect)arg2 withVisibleHeight:(float)arg3 rotationDelegate:(id)arg4;
- (struct CGSize)_defaultScrollViewContentSize;
- (void)_zoomToRect:(struct CGRect)arg1 withScale:(float)arg2;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4 formAssistantFrame:(struct CGRect)arg5 animationDuration:(double)arg6;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4;
- (void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2;
- (void)_centerRect:(struct CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(int)arg4;
- (struct CGRect)_activeRectForRectToCenter:(struct CGRect)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (struct CGPoint)_convertWindowPointToViewport:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL isDispatchingTouchEvents;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_handleDeferredEvents;
- (void)_deferWebEvent:(id)arg1;
- (void)_endDeferringEvents;
- (void)_startDeferringEvents;
- (void)_dispatchWebEvent:(id)arg1;
- (BOOL)_shouldDeferEvents;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webViewFormEditedStatusHasChanged:(id)arg1;
- (BOOL)isAutoFilling;
- (BOOL)isAutoFillMode;
- (void)autoFillWithElementValue;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)_autoFillFrame:(id)arg1;
- (void)_resetFormDataForFrame:(id)arg1;
- (id)textFormElement;
- (id)formElement;
- (BOOL)canAutoFill;
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)arg1;
- (void)_scrollCaretToVisible:(id)arg1;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)accessoryTab:(BOOL)arg1;
- (void)accessoryDone;
@property(nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property(nonatomic) BOOL allowsInlineMediaPlayback;
- (void)assistFormNode:(id)arg1;
- (void)assistFormNodeForTyping:(id)arg1;
- (void)_updateAccessory;
- (void)_displayFormNodeInputView;
- (void)_stopAssistingFormNode;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_updateFixedPositioningObjectsLayoutSoon;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(BOOL)arg2;
- (void)_stopAssistingNode:(id)arg1;
- (void)_startAssistingNode:(id)arg1;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)_promptForReplace:(id)arg1;
- (BOOL)playsNicelyWithGestures;
- (id)_editingDelegate;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)inputView;
- (id)inputAccessoryView;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (BOOL)resignFirstResponder;
- (id)textDocument;
- (id)_keyboardResponder;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (BOOL)isEditable;
- (void)installGestureRecognizers;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;

@end


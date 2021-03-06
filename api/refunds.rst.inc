.. _refunds:

refunds
=======

.. cssclass:: method-section

issue a refund
--------------

Issues a refund from a debit. You can either refund the full amount of the
debit or you can issue a partial refund, where the amount is less than the
charged amount.

.. container:: method-description

  ``amount`` 
      *optional* **integer**. Value must be **>=** ``1``. Value must be <= the remaining un-refunded amount on the original 
      ``debit``. 
   
  ``description`` 
      *optional* **string**. Sequence of characters. 
   
  ``meta`` 
      *optional* **object**. Single level mapping from string keys to string values. 
   
  ``debit_uri`` 
      *optional* **string**.  
   

.. container:: method-examples

  .. dcode:: refund_create

.. todo:: partial refund

.. cssclass:: method-section

retrieve a refund
-----------------

Retrieves the details of a refund that you've previously created. Use the
``uri`` that was previously returned, and the corresponding refund
information will be returned.

.. container:: method-description

  .. no request

.. container:: method-examples

   .. dcode:: refund_show


.. cssclass:: method-section

list all refunds
----------------

Returns a list of refunds you've previously created. The refunds are returned
in sorted order, with the most recent refunds appearing first.

.. container:: method-description

  ``limit``
      *optional* integer. Defaults to ``10``.

  ``offset``
      *optional* integer. Defaults to ``0``.

.. container:: method-examples

   .. dcode:: refund_list


.. cssclass:: method-section

list all refunds for an account
-------------------------------

Returns a list of refunds you've previously created against a specific account.
The refunds are returned in sorted order, with the most recent refunds
appearing first.

.. container:: method-description

  ``limit``
      *optional* integer. Defaults to ``10``.

  ``offset``
      *optional* integer. Defaults to ``0``.

.. container:: method-examples

   .. dcode:: refund_account_list


.. cssclass:: method-section

update a refund
---------------

Updates information about a refund

.. container:: method-description

   ``description`` 
       *optional* **string**. Sequence of characters. 
    
   ``meta`` 
       *optional* **object**. Single level mapping from string keys to string values. 
    

.. container:: method-examples

   .. dcode:: refund_update
